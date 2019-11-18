## Test Cpp on Catalina MacOS X with COM port using `ReaderOpenEx` of authentic SDK

* `main.cpp`
```C
#include "uFCoder.h"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    uint32_t reader_type =1; // 1 : uFR type (1 Mbps)
    const char *port_name ="/dev/tty.usbserial-A631LPCL";
    uint32_t port_interface=1; // 1 : try serial / virtual COM port / interfaces
    const char *arg ="READER_ACTIVE_ON_RTS_LOW"; //arg : additional settings in c-string format

    int res = ReaderOpenEx(reader_type,port_name,port_interface,(void *) arg);
    std::cout << "Status Code :  " << res;
    return 0;
}
```

* build and run
```sh
#Check the current VCOM port of Dlogic reader  
ls /dev/tty.usbserial*
# Replace  the value of port_name in line 6 of main.cpp
#build testapp.out
./build_test.sh 
#Test the app
./testapp.out

```