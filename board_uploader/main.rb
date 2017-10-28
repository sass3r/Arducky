require './uploader'

uploader = Uploader.new("/dev/ttyACM0")
uploader.setPayloadPath('../payloads/uacbypass_eventvwr_webDelivery_en/uacbypass_eventvwr_webDelivery_en.ino')
uploader.builder_dump_prefs
uploader.compile_payload
uploader.reset_arduino #reset arduino pro micro and upload hex
