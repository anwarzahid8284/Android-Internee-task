//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    println("\n First Objec of Class \n")
    // To Create Objects for give class

    val car1= Car("Wids","Petrole",100)

    // to print

    println(car1.name)
    println(car1.type)
    println(car1.KmRange)

    // to call Functions of class car

    car1.DriveCar()
    car1.ApplyBrakes()

    println("\n 2nd Objec of Class \n")

    // Second Object

    val car2=Car("Mehran","Petrole",80)

    println(car2.name)
    println(car2.type)
    println(car2.KmRange)

    // to call Functions of class

    car2.DriveCar()
    car2.ApplyBrakes()
}

            // OOP

class  Car(val name: String , val type: String , var KmRange: Int){ // Data members or properties

    fun DriveCar(){ // member function or method
        println("$name Car is Drive now ")
    }

    fun  ApplyBrakes(){
        println("Apply Brakes ")
    }
}