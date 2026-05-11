fun main()
{
    //Example 1
    println("Example 1")
    var isRaining=false
    if(isRaining) //ye hum is trah b lih sakte hai isRaining==true
    {
        println("Take Umbrella")
    }else
    {
        println("No rain enjoy your day")
    }
    println()

    //Exapmle 2
    println("Example 2")

    var x=15
    var y=15
    if (x>y)
    {
        println("X greater than y")
    }else if (x<y)
    {
        println("X less than Y")
    }else
    {
        println("X equal to Y")
    }
    println()


    //If else variation jo sirf kotlin mein available hai
    println("If else variation")
    var c=15
    var d=25
    var result= if(c>d)
    {
        "c greater than D"
    }else if (c<d)
    {
        "C less than D"
    }else
    {
        "C equal to D"
    }

    println("result: $result")
    println()

    //Check Even Odd
    println("Check Even Odd")
    var check_num=33
    var result2=if(check_num%2==0) "Even" else "odd"
    println("result: $result2")

}