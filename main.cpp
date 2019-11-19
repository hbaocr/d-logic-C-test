#include "uFCoder.h"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    const char *lib_ver = GetDllVersionStr();
    std::cout << "Share Lib Version :  " << lib_ver<<endl;
    uint32_t reader_type =1; // 1 : uFR type (1 Mbps)
    const char *port_name ="/dev/tty.usbserial-A631LPCL";
    uint32_t port_interface=1; // 1 : try serial / virtual COM port / interfaces
    const char *arg ="READER_ACTIVE_ON_RTS_LOW"; //arg : additional settings in c-string format

    int res = ReaderOpenEx(reader_type,port_name,port_interface,(void *) arg);
    std::cout << "Status Code :  " << res<<endl;
    return 0;
}