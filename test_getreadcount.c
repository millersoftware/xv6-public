#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
	printf(1,"Read times: %d\n", getreadcount());
	exit();
}
