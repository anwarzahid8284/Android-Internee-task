fun main()
{
    val obj=voter()
    obj.age=17
    println("Age ${obj.age}")

    //Getter
    println(obj.gender)
}

class voter
{
    var age = 15
        get() = field
        set(value)
        {
            if (age >= 18)
            {
                field=value
            }else
            {
              println("Age less than 18")
            }
        }

    //Getter
    var gender="Male"
    get()
    {
        return "Gender ${field}"
    }
}