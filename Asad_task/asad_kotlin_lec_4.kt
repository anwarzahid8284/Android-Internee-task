fun main()
{
    val above70=false
    val knowsProgramming=true
    //&& and operator
    var callForInter=above70 && knowsProgramming //agr aik true hogia & dusra false phir b Ans=false
    println(callForInter) //Ans: false

    // || Or operator
    callForInter=above70 || knowsProgramming
    println(callForInter)
    println()

    println("short-Circuiting")
    //Short-Circuiting
    var i=10
    var j=11

    var result= i==11 || j++ == 11
    println(i)
    println(j)
    println("result: $result")


    println("! NOT operator")
    //! NOT operator
    var answer=false
    result=!answer
    println("Result = $result") //Ans: true 

    result=!!answer
    println("Result = $result") //Ans: false
}