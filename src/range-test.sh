#!/bin/bash

# Infinite loop to send AT+SEND=5,5,HELLO command every 5 seconds to /dev/cu.SLAB_USBtoUART
while true
do
  echo "AT+SEND=5,5,HELLO" > /dev/cu.SLAB_USBtoUART
  sleep 5
done

