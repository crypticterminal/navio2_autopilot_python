#include <unistd.h>
#include <cstdio>
#include </home/pi/shared_c_libraries/navio/RCInput_Navio2.h>
#include </home/pi/shared_c_libraries/navio/Util.h>
#include <memory>

extern "C" {
	void* initialize() {
	    RCInput_Navio2* rcin = new RCInput_Navio2();
	    rcin->initialize();
		return rcin;
	}

	int read_rcin(void* ptr, int i) {
		RCInput_Navio2* rcin = reinterpret_cast<RCInput_Navio2*>(ptr);
		return rcin->read(i);
	}
}
