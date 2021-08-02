import './newexpense.css';
import ExpenseForm from './ExpenseForm';
import {useState} from 'react'

function NewExpense(props){
    
    const [open, setOpen] =useState(false);

    function openEditingHandler(){
        setOpen(true);
    }
    function transData(retrieveData){
        const tempData={
            ...retrieveData,
            id:Math.random().toString()
        }

        props.onRetrieval(tempData);
        setOpen(false)
    }
    function stopEditingHandler(){
        setOpen(false);
    }
    return(
        <div className='new-expense'>
            {!open && <button onClick={openEditingHandler}>Add New Expense</button>}
            {open && <ExpenseForm onRetrieval={transData} onCancel={stopEditingHandler}/>}
        </div>
    );

}
export default NewExpense