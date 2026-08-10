fun main()
{
  abc()
    val A_obj=A()

}

private fun abc() //ye sirf is file mein access hu skta hai
{
    println("i am abc")
}

open class A
{
  var a = 20
  var b=10
    protected fun xyz()
    {
        println("i am xyz")
    }
}
class B:A()
{
    fun b()
    {
        xyz()
    }
}
internal class C_encap:A()  //internal Sirf same Module ke andar use husakta hai
{
   fun c()
   {
       println("i am c_encap class")
   }
}