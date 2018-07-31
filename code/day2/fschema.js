var mongoose=require('mongoose');
var msechma=mongoose.Schema({
name:
{ 
    type:String,
    required:[true,'name is  required']
},
dept:
{
    type:String,
    default:'mba'
},
rollno:
{
    type:Number,
    required:[true,'rollno is required']
}
});
module.exports=mongoose.model('faculty',msechma);





