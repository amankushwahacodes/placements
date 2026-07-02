import { useContext } from "react"
import { UserContext } from "./UserContext"

function ChildrenDemo({children}) {

    const {user} =  useContext(UserContext);


    return (
        <>
        <h1>
            {children}

        </h1>
        <h2>
            {user.name} and {user.age}
        </h2>
        </>
        
    )
}

export default ChildrenDemo
