//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // for loop
    for(i in 1..5){
        println(i)
    }
    println("With until ")

    // with until ->> When Until use than the last digit dont included

    for(i in 1 until 5){
        println(i)
    }

    // Downto used for descending order mean 10 to 1

    println("With down to")

    for(i in 10 downTo 1 step 2){  // step used to increase i with 1 or other value
        println(i)
    }

    println("Table of 2")

    // to print 2 table
    val num=2

    for(i in 1..10){
        println("$num * $i = ${num*i}")
    }
}