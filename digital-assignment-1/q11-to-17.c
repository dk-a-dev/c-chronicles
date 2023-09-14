#include <stdio.h>

int num;

int *num_getter(int num)
{
    static int temp_arr[2];
    int first_digit;
    int last_digit = num % 10;
    num = num / 10;
    while (1)
    {
        num = num / 10;
        if (num / 10 == 0)
        {
            first_digit = num;
            break;
        }
    }
    temp_arr[0] = first_digit;
    temp_arr[1] = last_digit;
    return temp_arr;
}

int num_counter(int num)
{
    int count = 0;
    while (num / 10 > 0)
    {
        ++count;
        num = num / 10;
    }
    return count;
}

int swap(int num, int fst_dgt, int last_dgt, int count)
{
    int pow_num = 1;
    for (int i = 0; i < count; i++)
    {
        pow_num = pow_num * 10;
    }
    int middle_num = (num - (fst_dgt * pow_num)) - last_dgt;
    int swapped_num = (last_dgt * pow_num) + middle_num + fst_dgt;
    return swapped_num;
}

int *operation(int num)
{
    static int temp_arr[2];
    int sum = 0;
    int mult = 1;
    while (1)
    {
        if (num == 0)
            break;
        sum += (num % 10);
        mult *= (num % 10);
        num = num / 10;
    }
    temp_arr[0] = sum;
    temp_arr[1] = mult;
    return temp_arr;
}

int reversal(int num, int num_count)
{
    int rev_num = 0;
    while (num_count != 0)
    {
        int pow_num = 1;
        for (int i = 0; i < num_count - 1; i++)
        {
            pow_num = pow_num * 10;
        }
        rev_num += (num % 10) * pow_num;
        num = num / 10;
        num_count--;
        // OPTIMISED CODE
        // while (num != 0)
        // {
        //     rev_num = (rev_num * 10) + (num % 10);
        //     num /= 10;
        // }
    }
    return rev_num;
}

int main(int argc, char const *argv[])
{
    int *arr;
    int *arr2;
    printf("Enter the Number:");
    scanf("%d", &num);
    arr = num_getter(num);
    int count = num_counter(num);

    // 11 OBTAINING FIRST AND LAST DIGIT
    printf("first_num=> %d\nlast_num=> %d\n", arr[0], arr[1]);

    // 12 SUM OF FIRST AND LAST DIGIT
    printf("Sum of above two=> %d\n", (arr[0] + arr[1]));

    // 13 SWAPPING FIRST AND LAST DIGIT
    printf("Swapped Number is: %d\n", swap(num, arr[0], arr[1], count));

    // 14 & 15 SUM AND PRODUCT OF NUMBER
    arr2 = operation(num);
    printf("Sum of Digits: %d\nProduct of Digits: %d\n", arr2[0], arr2[1]);

    // 16 REVERSE OF NUMBER
    int revnum = reversal(num, count + 1);
    printf("Reversed number: %d\n", revnum);

    // 17 CHECK FOR PALINDROME
    if (revnum == num)
    {
        printf("Entered Number is PLAINDROME");
    }
    else
    {
        printf("Entered Number is NOT PLAINDROME");
    }
    return 0;
}
