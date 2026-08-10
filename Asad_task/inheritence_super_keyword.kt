fun main()
{
    val car_obj = Car("Yellow")
    //println(car_obj.name)
    //car_obj.drive()
}
open class Vehicle(var color:String)
{
    init {
        println("vehicle class is created:  Car color is $color")
    }
    open var name="Vehical"
    open fun drive()
    {
        println("Vehical is drive")
        //Super Keyword

    }
}
class Car(var carColor: String):Vehicle(carColor)
{
    init {
        println("init car class is created :  Car color is $carColor")
    }
    override var name="Car"
    override fun drive()
    {
        println("Car is drive")

        println(super.name)
    }

}