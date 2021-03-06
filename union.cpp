// union.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <stdint.h>
using namespace std;

union address {
	struct {
		uint8_t a;
		uint8_t b;
		uint8_t c;
		uint8_t d;
	} bytes;
	uint32_t int32;
};

int main( int argc, char ** argv ) {
	union address addr;
	addr.bytes = { 127, 0, 0, 90 };
	printf("%d.%d.%d.%d - (%08x)\n",
			addr.bytes.a, addr.bytes.b, addr.bytes.c, addr.bytes.d,
			addr.int32);
	return 0;
}
// ==> unions are often user to conserve space in data structures 