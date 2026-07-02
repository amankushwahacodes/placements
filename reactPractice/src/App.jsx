import StateDemo from "./components/statedemo";
import { UserContext } from "./components/UserContext";


function App() {

  const user = {
    name : 'Aman Kushwaha',
    age : 21
  }


  return (
    <UserContext.Provider value={{user}} >
      <StateDemo />
    </UserContext.Provider>
  );
}

export default App;
