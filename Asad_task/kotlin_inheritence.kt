open class developer
{
   open var name:String="Sajid"
    open var salary:Double= 2122.0
    open var exp=2

   open fun dev()
    {
        println("I am developer")
    }
}

class androidDev : developer()
{
    override var exp: Int=4
    override var salary: Double= 40000.0
    override var name:String="M Sajid"
    override fun dev() {
        println("I am android developer.  Override")

        //Super keyword
       println("Through Super keyword Name: ${super.name}")
    }
}
fun main()
{
    val obj=androidDev()
    obj.dev()
    println(obj.name)
    println(obj.salary)
    println(obj.exp)

    val objP=developer()
    objP.dev()
    println(objP.name)
    println(objP.salary)
    println(objP.exp)
}