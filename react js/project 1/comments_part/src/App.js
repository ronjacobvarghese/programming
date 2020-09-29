import React,{ useState , useEffect}from 'react';
import { Button , Input , FormControl,List} from '@material-ui/core';
import db from './firebase'
import './App.css';
import Comment from './Comment';
import firebase from 'firebase';

function App() {
  const [comments,setComments]=useState([]);//casts and array where the comments are stored in short term memory;
  const [input,setInput]=useState('');
  const [name,setName]=useState('');

  //when the app loads,teh value is taken from the database and take the comment as they are added;
  useEffect(() => {
    //this code fires when the app loads or whenever the input changes;
      db.collection('comments').orderBy('timestamp','desc').onSnapshot(snapshot =>{
        console.log(snapshot.docs.map(doc => doc.data().comment));
        setComments(snapshot.docs.map(doc => doc.data()));
      })
    },[]);
  const addComments=(event)=>{
    console.log('it is working');
    db.collection('comments').add({
      comment: input,
      timestamp: firebase.firestore.FieldValue.serverTimestamp(),
      name: name
    })
    event.preventDefault();//prevents the page from refreshing;
    setInput('');//re initiates it to a empty stringl
  }
  return (
    <div className="App">
      <center> <h1>Comments prototype</h1></center>
      <form>
      <FormControl>
      <div class="name_wrapper">
        <Input  placeholder="Enter name" id='name' value={name} onChange={event => setName(event.target.value)}/>
      </div>
      <div class="text-wrapper">
      <Input  placeholder="Enter text" id='message' value={input} onChange={event => setInput(event.target.value)}/>
      </div>
        <Button type="submit" id='button' onClick={addComments} variant="contained" color="primary">Comments?</Button>
      </FormControl>
      {console.log(comments)}
    </form>
    <ul>
      <List>
      {comments.map(comment =>(Comment(comment)))}
      </List>
    </ul>
    </div>
  );
}

export default App;
