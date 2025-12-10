## Указател
Променлива, която пази адрес(memory address) като стойност. <br /> 
Променливата на указател сочи към типа данни, от същия тип, която е и тя, и се създава чрез оператор *. <br /> 
Адресът на променливата, с която работите, се присвоява на указателя. <br /> 

```c++
int number = 5;
int* ptr = &number;// A pointer variable, with the name ptr, that stores the address of number

// Output the value of number
std::cout << number << "\n";

// Output the memory address of number
std::cout << &number << "\n";

// Output the memory address of number with the pointer
std::cout << ptr << "\n";
```

Може да съдържа както адреса на някоя променлива, така и нулев адрес (nullptr) или някоя непозволена памет (което е източник на грешки). <br /> Адресът, който указателят съдържа, може да се променя. <br /> 
Може да се извършват промени по данните на съответния адрес. <br /> 
Указателят също притежава адрес. <br /> 

```c++
    //create pointer and set it to address of variable
    bool* engineer = nullptr; 
    bool plane1 = true;
    engineer = &plane1;

    //create another pointer and set it to point to the same address as the first pointer
    bool* gremlin = engineer;

    //decrement the value 
    (*gremlin)--;

    //set the value to true
    *engineer = true;

    //set value
    bool plane2 = *engineer;
    *gremlin = false;

    //set pointer to plane2's address
    gremlin = &plane2;

    //set value
    *engineer = 1;

    //set gremlin's value to opposite of engineer's value
    *gremlin = !(*engineer);
```

### Указатели и масиви

```c++
    int arr[] = {1, 2, 3};
    int* ptr = arr;
```

![enter image description here](https://i.ibb.co/cDcX8st/Untitled-Diagram-drawio-3.png)
```c++
    ptr++;
    cout << ptr[0]; //2;
    cout << ptr[1]; //3;
```

 ![enter image description here](https://i.ibb.co/xLLsVK5/Untitled-Diagram-drawio-4.png)

### Nullptr
- pointer literal(пойнтеров литерал).
- Не може да се вземе адреса му с &.
- nullptr сочи към адрес 0x00000000.

```c++
// function with integer argument
void fun(int N)  { 
    std::cout << "fun(int)\n";
}

// Overloaded function with char pointer argument
void fun(char* s) {
    std::cout << "fun(char*)\n";
}

int main() {
    fun(NULL);
}
//call of overloaded 'fun(NULL)' is ambiguous
```

### Указатели към константи/Константни указатели
Указателите към константа – НЕ може да се променя стойността на променливата, към която сочат.
- const int* - указател към константа
- int const* - указател към константа

![Pointer to const & const pointer](images/example1.png)

Константните указатели са като референциите, но са указатели.
Може да се променя стойността на променливата, но НЕ може да се променя да сочи към друга променлива.
- int* const – константен указател

![Const pointer to const](images/example2.png)

### Spiral Rule - Bjarne Stroustrup
Правилото гласи, започнете от името на променливата и се придвижваме по посока на часовниковата стрелка до следващия указател или тип.

![Spiral rule](images/spiral-rule.jfif)

```c++
const int * const == int const * const – константен пойнтър към константа

( int *) * const – константен пойнтър към пойнтър от тип int

( (int ) * const )* - пойнтър към константен пойнтър към int

( ( int const ) *) * - двоен пойнтър към константа от тип int

( ( int ) * const ) * const – константен пойнтър към константен пойнтър към int

( ( const int ) * const ) * const – константен пойнтър към константен пойнтър към константа от тип int
```
