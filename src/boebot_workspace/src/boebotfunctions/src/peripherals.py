#!/usr/bin/python

'''
peripherals.py - Define commands to send from the Raspberry Pi to the Boe Bot through Pyserial.

Bryant Pong
6/25/15

Last Updated: 6/25/15 - 6:17 PM
'''

# Python Imports:
import rospy
import serial
from std_msgs.msg import String
from boebotfunctions.srv import *

# Serial Port Object.  The Arduino talks to the Pi on /dev/ttyACM0:
ARDUINOPORT = "/dev/ttyACM0"
ARDUINOBAUD = 115200 

# Create the serial port object:
ser = None
try:
	ser = serial.Serial(ARDUINOPORT, ARDUINOBAUD)
except serial.SerialException:
	print "Error in creating Arduino Serial Port Object"

# Create the service node:
def arduino_service():
	
	# Initialize this node:
	rospy.init_node("arduino_service")


# Start the Arduino Service Node:
if __name__ == "__main__":
	arduino_service()

