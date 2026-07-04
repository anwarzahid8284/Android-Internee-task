class  Student(var name: String){




    init {

        println("This is primary constructor and name of student is ${name}")
    }

    // to create a Secondary constructor will write constructor keyWord

    constructor(name: String,age : Int) : this(name){


        println("This is Secondary constructor and name is ${name}  , age is ${age}")
    }
}

fun main(){
    var s1=Student("Ali") // in this case called the primary constructor

    var s2=Student("Khan",23) // in this case will call the secondary constructor
}