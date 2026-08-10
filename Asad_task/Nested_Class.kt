  class Outer
{
    var name="Outer class"

    inner class Inner
    {
        fun inner()
        {
            println("inner function: $name")
        }
    }
}
fun main()
{
    val obj_outer=Outer()
    val objInner = Outer().Inner()
    objInner.inner()
}