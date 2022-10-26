#include <string>
#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee
{
	private:
		int shift; //Will hold 1 Day Shift 2 Night Shift
		double hourlyPay;
	public:
		ProductionWorker(string n, string num, string date, int sft, double hlyPay) : Employee(n, num, date)
		{
			shift = sft;
			hourlyPay = hlyPay;
		}

		int getShift() const
		{
			return shift;
		}
		double gethourlyPay() const
		{
			return hourlyPay;
		}
};
