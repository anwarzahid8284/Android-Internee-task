//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // add function
    val a=add(3,4,)

    println("Addition is : $a")

    // addNu -> Inline function

    val b=addNu(5,6,)

    println("Inline function value is : $b")

    // table of number method

    tableOf(2)

    // count function

    count(5)

    println("With no arguments its have a value 2 ")

    count()
}

fun add(n1: Int,n2: Int) : Int {
    val re=n1+n2

    return re
}

// Inline method
fun addNu(num1: Int,num2: Int) =num1+num2

// we know that sum of two integers must be an integer
// than we dont type in this case return type


fun tableOf(number:Int){ // by default return type will Unit just like void
    for(i in 1..10){
        println("$i * $number  = ${i*number}")
    }
}

fun count(digit :Int =2 ){ // when dont pass argument then will assign 2 to digit
    for(i in 1..digit){
        println("Hello $i")
    }
}

