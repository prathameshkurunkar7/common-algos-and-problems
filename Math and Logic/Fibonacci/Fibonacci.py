# Program to display Fibonacci Series till n numbers

def fibonacci(n):
    a,b=0,1 # starts from
    while a<n:
        print(a,end=' ')
        a,b=b,a+b


if __name__ == '__main__':
    n = int(input('Enter the number of terms for fibonacci series: '))
    fibonacci(n) 