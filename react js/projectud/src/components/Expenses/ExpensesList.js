import './expenseslist.css'
import ExpenseItem from './ExpenseItem';

function ExpensesList(props){

    if(props.items.length === 0){
      return <h2 className="expenses-list__fallback">No expenses found.</h2>;
    }

    return <ul className="expenses-list">
      {props.items.map((item) => (
        <ExpenseItem key={item.id} object={item} />
      ))}
    </ul>
  }
export default ExpensesList;