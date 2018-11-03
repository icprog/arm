// EPOS cout Test Program
#include <virtual_tstp.h>
#include <utility/ostream.h>

using namespace EPOS;

OStream cout;

int main()
{
    while(true)
        cout << Virtual_TSTP::teste() << endl;

    return 0;
}
