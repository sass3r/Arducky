require 'serialport'

class Uploader
    def initialize(serialPort)
        @serialPort = serialPort
        @payloadPath = ''
        @cmdFlash = ''
        @builderPath = '/home/archy/Downloads/arduino-1.8.3/arduino-builder'
        @hardwarePath = '/home/archy/Downloads/arduino-1.8.3/hardware'
        @toolsBuilder = '/home/archy/Downloads/arduino-1.8.3/tools-builder'
        @toolsAVR = '/home/archy/Downloads/arduino-1.8.3/hardware/tools/avr'
        @librariesPath = '/home/archy/Downloads/arduino-1.8.3/libraries'
        @arduinoType = 'arduino:avr:leonardo'
        @vidPid = '0X2341_0X8036'
        @ideVersion = '10803'
        @prefsWarnDataPercent = '-prefs=build.warn_data_percentage=75'
        @prefsOTA = "-prefs=runtime.tools.arduinoOTA.path=#{@toolsAVR}"
        @prefsAvrDude = "-prefs=runtime.tools.avrdude.path=#{@toolsAVR}"
        @prefsGcc = "-prefs=runtime.tools.avr-gcc.path=#{@toolsAVR}"
        @buildPath = "/tmp/arduino_build_#{1000+Random.rand(999)}"
        @buildCache = "/tmp/arduino_cache_#{500+Random.rand(999)}"
        @avrdudeBin = '/home/archy/Downloads/arduino-1.8.3/hardware/tools/avr/bin/avrdude'
        @avrdudeConf = '/home/archy/Downloads/arduino-1.8.3/hardware/tools/avr/etc/avrdude.conf'
        @mcu = 'atmega32u4'
        @flashBaud = '57600'
        @progType = 'avr109'
    end

    def getPayloadName
        pathArray = File::split(@payloadPath)
        fileName = pathArray[pathArray.length-1]
        return fileName + ".hex"
    end

    def setPayloadPath(payloadPath)
        @payloadPath = payloadPath
    end

    def builder_dump_prefs
        system 'mkdir',@buildPath
        system 'mkdir',@buildCache
        _cmd = "#{@builderPath} -dump-prefs -logger=machine -hardware #{@hardwarePath} -tools #{@toolsBuilder} -tools #{@toolsAVR} -built-in-libraries #{@librariesPath} -fqbn=#{@arduinoType} -vid-pid=#{@vidPid} -ide-version=#{@ideVersion} -build-path #{@buildPath} -warnings=none -build-cache #{@buildCache} #{@prefsWarnDataPercent} #{@prefsOTA} #{@prefsAvrDude} #{@prefsGcc} -verbose #{@payloadPath}"
        puts _cmd
        system 'bash','-c',_cmd
    end

    def compile_payload
        _cmd = "#{@builderPath} -compile -logger=machine -hardware #{@hardwarePath} -tools #{@toolsBuilder} -tools #{@toolsAVR} -built-in-libraries #{@librariesPath} -fqbn=#{@arduinoType} -vid-pid=#{@vidPid} -ide-version=#{@ideVersion} -build-path #{@buildPath} -warnings=none -build-cache #{@buildCache} #{@prefsWarnDataPercent} #{@prefsOTA} #{@prefsAvrDude} #{@prefsGcc} -verbose #{@payloadPath}"
        puts _cmd
        system 'bash','-c',_cmd
    end

    def reset_arduino
        #system 'bash','-c',"./reset_leo.py #{@serialPort}"
        puts "RESETEANDO ARDUINO"
        baud_rate = 1200
        data_bits = 8
        stop_bits = 1
        parity = SerialPort::NONE
        serial = SerialPort.new(@serialPort,baud_rate,data_bits,stop_bits,parity)
        serial.dtr = 0
        sleep(0.5)
        serial.close
        flag = true
        hilo = Thread.new {
            while flag do
                system 'bash','-c',"ls #{@serialPort}"
                puts $?.success?
                if $?.success? then
                    puts "Te atrape, cargar codigo"
                    upload_firmware
                    flag = false
                end
            end
        }.join
    end

    def upload_firmware
        @cmdFlash = "flash:w:#{@buildPath}/#{getPayloadName}:i"
        _cmd = "#{@avrdudeBin} -C #{@avrdudeConf} -v -p #{@mcu} -c #{@progType} -P #{@serialPort} -b #{@flashBaud} -D -U #{@cmdFlash}"
        system 'bash','-c',_cmd
    end

end
