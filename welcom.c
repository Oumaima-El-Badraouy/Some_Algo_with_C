#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// دالة لحساب التحويل من ثنائي لعشري
void BnarytoDecimal(){
    int arry[]={1,0,1,1};
    int decimal=0;
    int size = sizeof(arry)/sizeof(arry[0]);
    for(int i =0;i<size;i++){
        decimal += arry[size-i-1] * pow(2,i);
    }
    printf("Decimal: %d\n",decimal);
}

// دالة لإزالة التكرار لعنصر معين في سترينغ
void FoundOccurance(){
    char A[]="abcaa";
    char B[100];
    int size = strlen(A);
    char element = 'a';
    int result=0;
    int j=0;
    for(int i=0; i<size; i++){
        if(A[i]==element){
            result++;
            if(result == 1){
                B[j++] = A[i];
            }
        }
        else {
            B[j++] = A[i];
        }
    }
    B[j] = '\0';
    printf("Resulting string without duplicates of '%c': %s\n", element, B);
}

// دالة لمعرفة إذا كان العام كبيس
void Yearleap(int year){
    if((year % 100 != 0 && year % 4 == 0) || year % 400 == 0){
        printf("Year %d is leap\n", year);
    }
    else {
        printf("Year %d is not leap\n", year);
    }
}

// دالة لجمع عنصرين من مصفوفتين (مصفوفة الناتج محلية فقط)
void VectoreADD(int arry[], int arry1[], int arrysize){
    int result[arrysize];
    for(int i=0; i<arrysize; i++){
        result[i] = arry[i] + arry1[i];
        printf("Sum at index %d: %d\n", i, result[i]);
    }
}

// دالة لحاصل ضرب عنصرين من مصفوفتين
void VectoreDot(int arry[], int arry1[], int arrysize){
    int result[arrysize];
    for(int i=0; i<arrysize; i++){
        result[i] = arry[i] * arry1[i];
        printf("Product at index %d: %d\n", i, result[i]);
    }
}

// دالة لإظهار رقم عشوائي من 1 إلى 6 (كبير النرد)
void RandomNumber(){
    srand(time(0));
    int random = (rand() % 6) + 1;
    printf("Random number (1-6): %d\n", random);
}

// دالة لعكس مصفوفة وطباعتها
void ReverseArray(){
    int array1[5] = {8, 2, 3, 4, 5};
    int sizee = sizeof(array1)/sizeof(array1[0]);
    int arry2[5];
    for (int i=0; i<sizee; i++){
        arry2[i] = array1[sizee - i - 1];
        printf("Reversed element %d: %d\n", i, arry2[i]);
    }
}

// دالة لإضافة عنصر عشوائي لمصفوفة وطباعة المصفوفة
void Ajoutersurarray(){
    int array1[10] = {1, 2, 3};
    int size = 3;
    int value = (rand() % 6) + 1;
    array1[size] = value;
    size++;
    for (int i=0; i<size; i++){
        printf("Array element %d: %d\n", i, array1[i]);
    }
}

// دالة لضم سلسلتين نصيتين وطباعة النتيجة
void Ajoutersurstring(){
    char array1[20] = "ouma";
    char array2[] = "ima";
    strcat(array1, array2);
    printf("Concatenated string: %s\n", array1);
    int size = strlen(array1);
    char value = 'i';
    array1[size] = value;
    array1[size+1] = '\0';
    printf("After adding char: %s\n", array1);
}

// دالة لتحويل الحروف الكبيرة إلى صغيرة والعكس
void Uppertolowerorlowertoupper(){
    char a='a';
    char b='B';
    a = a - 32; // 'a' to 'A'
    b = b + 32; // 'B' to 'b'
    printf("Uppercase: %c, Lowercase: %c\n", a, b);
}

// دالة لطباعة متتالية فيبوناتشي
void FibonacciSequence(int n){
    int a = 0, b = 1, next;
    printf("Fibonacci sequence: %d %d ", a, b);
    for(int i=2; i<n; i++){
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

// دالة لحساب عدد الحروف المتحركة المشتركة بين سلسلتين
void CountVowels(){
    char array1[] = "aecdi";
    char array2[] = "ayeoi";
    int sumvowels = 0;
    for(int i=0; i<strlen(array1); i++){
        for(int j=0; j<strlen(array2); j++){
            if(array1[i] == array2[j]){
                sumvowels++;
            }
        }
    }
    printf("Number of matching vowels: %d\n", sumvowels);
}

// دالة لنسخ محتوى مصفوفة إلى أخرى
void Copyarray(){
    int array[] = {8, 2, 3, 4, 5};
    int arry1[5];
    int sizee = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<sizee; i++){
        arry1[i] = array[i];
        printf("Copied element %d: %d\n", i, arry1[i]);
    }
    printf("\n");
}

// دالة لإيجاد أقل رقم في مصفوفة
void Minimumnumber(){
    int array[] = {8, 2, 3, 4, 5};
    int sizee = sizeof(array)/sizeof(array[0]);
    int min = array[0];
    for(int i=1; i<sizee; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    printf("Minimum number: %d\n", min);
}

// دالة لإيجاد أكبر رقم في مصفوفة
void MaxNumber(){
    int array[] = {8, 2, 3, 4, 5};
    int sizee = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(int i=1; i<sizee; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("Maximum number: %d\n", max);
}

// دالة لحساب عدد مرات ظهور رقم معين في مصفوفة
void CounterOccurance(){
    int array[] = {2, 2, 2, 4, 5};
    int sizee = sizeof(array)/sizeof(array[0]);
    int number = 2;
    int sum = 0;
    for(int i=0; i<sizee; i++){
        if(array[i] == number){
            sum++;
        }
    }
    printf("Number %d appears %d times\n", number, sum);
}

// دالة للتحقق من كون سلسلة نصية هي Palindrome
void StringPol(char var[]){
    int start = 0;
    int end = strlen(var) - 1;
    while(start < end){
        if(var[start] != var[end]){
            printf("False: Not a palindrome\n");
            return;
        }
        start++;
        end--;
    }
    printf("True: It is a palindrome\n");
}

// دالة لحساب مجموع عناصر مصفوفة
void Arraysum(int array1[], int sizee){
    int sum = 0;
    for(int i=0; i<sizee; i++){
        sum += array1[i];
    }
    printf("Sum of array: %d\n", sum);
}

// دالة لحساب متوسط عناصر مصفوفة
void Arrayavg(int array1[], int sizee){
    int sum = 0;
    for(int i=0; i<sizee; i++){
        sum += array1[i];
    }
    float result = (float)sum / sizee;
    printf("Average of array: %.1f\n", result);
}

// دالة لتحويل من درجة مئوية إلى فهرنهايت
void Celsiustofehrniet(float Celsius){
    float result = (Celsius * (9.0/5.0)) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", result);
}

// الدالة الرئيسية main
int main(){
    BnarytoDecimal();
    FoundOccurance();

    int arr[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int arrysize = sizeof(arr) / sizeof(arr[0]);
    VectoreDot(arr, arr2, arrysize);
    VectoreADD(arr, arr2, arrysize);

    Yearleap(2025);
    Copyarray();

    int var[] = {1, 2, 3};
    int sizee = sizeof(var) / sizeof(var[0]);
    Arraysum(var, sizee);
    Arrayavg(var, sizee);

    Celsiustofehrniet(60);
    FibonacciSequence(5);

}
