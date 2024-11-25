#ifndef PROBLEMS_H
#define PROBLEMS_H

void days2years(int &days, int &years) {
    int averageDays= 365;
    years = days/averageDays;
    days = days%averageDays;
}
// Problem 2
double func(double *x,double *y) {
    *y = 11*(*x)*(*x)*(*x)/3+5;
    return *y;
}


// Problem 3
int minsNewYear(int *hour, int *min) {
  *min = 1440 - ((*hour*60)+(*min));
  return *min;
}

// Problem 4
double probability(int *A,int *B) {
    if(*A>*B) {
        return (6-*A+1)/6.0;
    }else {
        return (6-*B+1)/6.0;
    }
}

// Problem 5
int presses(int *x) {
    int apartment = *x;
    int counter = 0;
    int qoldiq = *x%10;
    int digitNumb = 0;
    while(*x >0) {
        *x = *x/10;
        digitNumb++;
    }
    for(int i=1;i<qoldiq;i++) {
        for(int j=1;j<=digitNumb;j++) {
            counter++;
        }
    }
    for(int j=1;j<=digitNumb;j++) {
        counter+=j;
        if(j == digitNumb) {
            break;}
        return counter;
    }
}
#endif


