//try catch as an expression value return karna
fun expression(a:Int,b:Int): Int
{
    return try {
        a/b
    }catch (e: Exception)
    {
        0
    }
}

fun main()
{
    try {
        var a="abc".toInt()
    }
    catch (e:Exception)
    {
        println("Error aya ${e.message}")
    }
    finally {
        println("process done: finally body is executed")

    }
    println()

    println(expression(10,2))
println()

    //Throw Exception 1
    println("Throw :- ")
    var age=17
   try {
       if (age < 18)
       {
           throw Exception("Aap ki umar 18 se kam hai")
       }else
       {
           println("aap ki umar 18 se zyada hai hai")
       }
   }catch (e:Exception)
   {
       println("Error aya:  ${e.message}")
   }

   //Throw Exception 2
    println("Throw 2 :- ")
    age=20
    try {
        if (age < 18)
        {
            throw Exception("Aap ki umar 18 se kam hai")
        }else
        {
            println("aap ki umar 18 se zyada hai hai")
        }
    }catch (e:Exception)
    {
        println("Error aya:  ${e.message}")
    }
}

