#include "Compare.h"
#include "Travel_time.h"

bool Compare(Transport* First, Transport* Second) {
    return Travel_time(First->Speed, First->Distance) > Travel_time(Second->Speed, Second->Distance);
}