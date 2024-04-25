import SerialPort from 'serialport';

const port = new SerialPort('/dev/cu.SLAB_USBtoUART', {
  baudRate: 115200
});



function sendCommand() {
  console.log('Sending command: AT+SEND=5,5,HELLO');
  port.write('AT+SEND=5,5,HELLO\r\n', (err) => {
    if (err) {
      return console.log('Error on write: ', err.message);
    }
    console.log('Command sent successfully');
  });
}

// Send the command every 5 seconds
setInterval(sendCommand, 5000);
