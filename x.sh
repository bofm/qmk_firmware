USB=
printf "Detecting USB port, reset your controller now."
ls /dev/tty* > /tmp/1
while [ -z $USB ]; do
    sleep 0.5
    printf "."
    ls /dev/tty* > /tmp/2
    USB=`comm -13 /tmp/1 /tmp/2 | grep -o '/dev/tty.*'`
    mv /tmp/2 /tmp/1
done
echo ""
echo "Device $USB has appeared; assuming it is the controller."
printf "Waiting for $USB to become writable."
while [ ! -w "$USB" ]; do sleep 0.5; printf "."; done; echo ""
# avrdude -p m32U4 -c avr109 -P $USB -U flash:w:$(BUILD_DIR)/$(TARGET).hex
avrdude -p m32U4 -c avr109 -P $USB -U flash:w:quantum/tools/eeprom_reset.hex
# avrdude -p m32U4 -c avr109 -P $USB -U "eeprom:r:$PWD/eeprom.hex.bak"
