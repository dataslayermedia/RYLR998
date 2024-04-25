import serial
import time

# Setup the serial connection
ser = serial.Serial('/dev/cu.SLAB_USBtoUART', 115200, timeout=1)

# Initialize counter
counter = 0

# Function to send command with incremented counter
def send_command(counter):
    message = f'MSG{counter}'
    message_length = len(message)
    command = f'AT+SEND=5,{message_length},{message}\r\n' # Ensure commands use NL + CR
    ser.write(command.encode())
    print(f'Sent command: {command.strip()}')

# Main loop to send the command every 3 seconds with incremented counter
while True:
    send_command(counter)
    counter += 1
    time.sleep(5)
