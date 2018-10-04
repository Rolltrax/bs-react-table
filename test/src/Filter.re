open ReactTable;
let columns = [|
  {"Header": "First Name", "accessor": "firstname"},
  {"Header": "Last Name", "accessor": "lastname"},
|];

let data = [|
  {"firstname": "Zach", "lastname": "Baylin"}
|];

let component = ReasonReact.statelessComponent("Filter");

let make = (_children) => {
  ...component,
  render: self =>
    <ReactTable
    columns
    data
    filterable=true
    defaultFilterMethod=((x,y,z) => {
      let id = Js.Dict.unsafeGet(x, "id");
      let value = Js.Dict.unsafeGet(x, "value")
      let column = Js.Dict.unsafeGet(y, id);
      
      Js.Re.test(Obj.magic(column), Js.Re.fromStringWithFlags(value, "gi"))
    })
    label=None
    />
};