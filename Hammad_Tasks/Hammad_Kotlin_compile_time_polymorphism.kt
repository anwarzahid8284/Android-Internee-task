                        //  function overloading in polymorphism or compile time polymorphism

class  student(var name:String){ // primary constructor
    var roll: Int=0
    constructor(name: String,roll: Int):this(name) {// whene create a secondary constructor then must call orimary constructor
        this.name=name
        this.roll=roll
         }

    fun stInfo(){
        println("Student name is :${name}  and roll is :$roll ")
    }

    fun stInfo(age: Int){
        println("Student name is :${name}  and roll is :$roll and Age is :$age")
    }
}
fun main(){
    val s=student("Shahab",2003)

    s.stInfo()

    s.stInfo(22)
}