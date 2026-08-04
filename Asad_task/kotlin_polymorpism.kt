fun main()
{

    //For Compile time polymorphism
    println("Compile time polymorphism")
    println(methodOf(2)) //4
    println(methodOf(3.3))
    println(methodOf(4.9f))


//Run time polymorphism
    println()
    println("Run time polymorphism")
    var obj2=Super2()
   println(obj2.method2())
}

//Run time polymorphism
open class Super1
{
    open fun method1()
    {
        println("method1 from super1")
    }

    open fun method2() : String ="A"
}

class Super2 :Super1()
{
    override fun method1() {
      println("method1 from super1")
    }

    override fun method2(): String {
        return "method2 from super2"
    }
}

//Compile time polymorphism
fun methodOf(a: Int) : Int
{
    return 2*a
}

fun methodOf(b: Double): Double
{
    return b*2
}

fun methodOf(c: Float): Float
{
    return c*2
}