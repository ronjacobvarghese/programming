import './expenseform.css';
import React,{ useState } from 'react'

function ExpenseForm(props){

    const [tempTitle,setTempTitle]=useState('');
    const [tempAmount,setTempAmount]=useState('');
    const [tempDate,setTempDate]=useState('');


    function titleChangeHandler(event){
        setTempTitle(event.target.value);
    }

    function amountChangeHandler(event){
        setTempAmount(event.target.value);
    }

    function dateChangeHandler(event){
        setTempDate(event.target.value);
    }
    function submitHandler(event){
        event.preventDefault(); //to prevent the page from reloading;

        const expenseData={
            title: tempTitle,
            amount: +tempAmount,
            date: new Date(tempDate)
        };
        props.onRetrieval(expenseData);

        setTempTitle("");
        setTempAmount("");
        setTempDate("");
    
    }
    return(
        <form onSubmit={submitHandler}>
            <div className="new-expense__controls">
                <div className="new-expense__control">
                    <label>Title</label>
                    <input type='text' value={tempTitle} onChange={titleChangeHandler}/>
                </div>
                <div className='new-expense__control'>
                    <label>Amount</label>
                    <input type='number' value={tempAmount} onChange={amountChangeHandler}/>
                </div>
                <div className="new-expense__control">
                    <label>Date</label>
                    <input type='date' value={tempDate}  min="2019-01-01" max="2022-12-31" onChange={dateChangeHandler} />
                </div>
            </div>
            <div className="new-expense__actions">
                <button type="button" onClick={props.onCancel}>Cancel</button>
                <button type="submit">Add Expense</button>
            </div>
        </form>
    );
}
export default ExpenseForm;