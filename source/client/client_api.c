#include "client_api.h"
#include "service_api.h"

int get_sum(int a, int b)
{
	int sum = 0;
	sum = cal_sum(a, b);

	return sum;
}
