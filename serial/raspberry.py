import serial
import time

ser = serial.Serial('/dev/ttyUSB0', 115200)  # Change '/dev/ttyUSB0' to the correct port

try:
    while True:
        key_input = input("Enter command (w/a/s/d): ").lower()
        ser.write(key_input.encode())
        time.sleep(0.1)  # Add a small delay to avoid flooding the serial port
except KeyboardInterrupt:
    ser.close()
