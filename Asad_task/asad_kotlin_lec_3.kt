fun main()
{
    //Kotlin arithmatic Operator
    val a=10;
    val b=3;
    print("a= ")
    println(a)
    print("b= ")
    println(b)

    print("a+b= ")
    println(a + b) //Ans: 13
    print("a-b= ")
    println(a - b) //Ans: 7  Agar a and b duno integer ho to iska ans b int huga

    println(a.toFloat() * b) //30.0
    println(a / b.toFloat()) // b ko float mein covert kia is leye is ka jawab float mein aya
    println(a % b) //Ans: 1 Modulud % gives remainder

    //Relational Operator
    println(a > b) //Ans: True
    println(a < b) //Ans: False
    println(a >= b) // True
    println(a <= b) // False
    println(a == b) // False
    println(a != b) // True
    println()  //For new line

    //Increment Operator
    println("Increment Operator")
    var c=10;
    println(c++) //Post increment fist value ko print kia is k baad inrease hogia ans=10, increase=11
    println(++c) //pehle value me izafa kia ie 12 is k baad print huwa Ans: 12

    var dec=5;
    //value first printed (Ans= 5) & after that the value is decreased
    println(dec--)
    //value first decreased (ie 3) & after that the value is printed
    println(--dec)

    var d=15;
    println(d++ + --d) //Ans= 30
}