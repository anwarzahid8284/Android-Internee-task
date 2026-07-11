class  animal(var age: Int){
    init {
        println(" init block run")
    }
    var name1:String=""

    constructor(name: String,age : Int):this(age){
        this.name1=name
    }

    fun disPr(){
        println("this is the primary constructor and its age is $age")
    }

    fun dsiSecondary(){
        println("Thuis si the secondary constructor and its name is $name1")
    }

}



fun main(){
    var a=animal(34)

    var a2=animal("Ali",35)

    a.disPr()
    println("-------------------")
    a2.dsiSecondary()


}