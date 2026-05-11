fun main()
{
    //Range
    var number=5
    var result=number in 1..5 //5 is include in this range
    println("Result1: $result")

    var no=10
    var result2=no in 1 until 10 //10 is not include in this range
    println("Result2: $result2")
    println()

    //When Expression Example 1
    println("When Expression example 1:-")

    var animal="Camel";
    when (animal)
    {
      "Horse"-> println("animal is Horse")
        "cat"-> println("animal is Cat")
        "Camel" -> println("animal is Camel")
        else -> println("animal is Unknown")
    }
    println()

    println("When Expression example 2:")
    number=10
    val result3=when(number)
    {
        8 -> "Eight"
        9 -> "Nine"
        10 -> "Ten"
        else -> "Unknown"
    }
    println("result3: $result3")

}