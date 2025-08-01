double average(int* salary, int salarySize) {
    double avg,s;
    int i,c;
    s=0;
    int max,min;
    max=salary[0];
    min=salary[0];

    for(i=0;i<salarySize;i++)
    if(salary[i]>max)
    max=salary[i];

    for(i=0;i<salarySize;i++)
    if(salary[i]<min)
    min=salary[i];
    
    c=0;
    for(i=0;i<salarySize;i++)
    if(salary[i]!=max && salary[i]!=min)
    c++;

    for(i=0;i<salarySize;i++)
    if(salary[i]!=max && salary[i]!=min)
    s+=salary[i];


    avg=s/c;
    return avg;
}
