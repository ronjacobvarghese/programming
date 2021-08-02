import './expenseform.css';
import React,{ useState } from 'react'

function ExpenseForm(){

    const [UserInput,setUserInput]=useState({
        tempTitle:'',
        tempAmount:'',
        tempDate:''
    });

//non commented version
    function titleChangeHandler(event){
        setUserInput((prevState)=>{
            return {...prevState, tempTitle: event.target.value};
        })
    }

    function amountChangeHandler(event){
        setUserInput((prevState)=>{
            return{...prevState,tempAmount: event.target.value};
        })
        }

    function dateChangeHandler(event){
        setUserInput((prevState) => {
            return{...prevState,tempDate:event.target.value};
        })
        }
//this too is possible
//commented version


// function titleChangeHandler(event){
//     setUserInput({
//         ...prevState, 
//         tempTitle: event.target.value}
//     )
// }

// function amountChangeHandler(event){
//     setUserInput({
//         ...prevState, 
//         tempAmount: event.target.value}
//     )
//     }

// function dateChangeHandler(event){
//     setUserInput({
//         ...prevState, 
//         tempDate: event.target.value}
//     )
// }

// what is the difference?(y is it not prefered?)

// here the problem is that even thought both the methods carry out the same idea the commented version may not necessarily contain 
// the latest values for which the future state is dependent on but the non commented version guarantees that the values in the object are the latest values obtained by them

    return(
        <form>
            <div className="new-expense__controls">
                <div className="new-expense__control">
                    <label>Title</label>
                    <input type='text' onChange={titleChangeHandler}/>
                </div>
                <div className='new-expense__control'>
                    <label>Amount</label>
                    <input type='number' onChange={amountChangeHandler}/>
                </div>
                <div className="new-expense__control">
                    <label>Date</label>
                    <input type='date' min="2019-01-01" max="2022-12-31" onChange={dateChangeHandler} />
                </div>
            </div>
            <div className="new-expense__actions">
                <button type="submit">Add Expense</button>
            </div>
        </form>
    );
}
export default ExpenseForm;