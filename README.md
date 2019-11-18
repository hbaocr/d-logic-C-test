## Test Cpp on Catalina MacOS X with COM port using `ReaderOpenEx` of authentic SDK

```sh
#Check the current VCOM port of Dlogic reader  
ls /dev/tty.usbserial*
# Replace  the value of port_name in line 6 of main.cpp
#build testapp.out
./build_test.sh 
#Test the app
./testapp.out

```