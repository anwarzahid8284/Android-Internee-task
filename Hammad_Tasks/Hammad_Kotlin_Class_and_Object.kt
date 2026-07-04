class  car{
    // by default public
    var  modelName: String="xyz"
    fun info(){
        println("The name of car ${modelName}")
    }
}

fun main(){
    // object of class ca
    var c1=car() // default constructor

    println(c1.modelName)

    c1.info()
}