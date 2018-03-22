# bs-react-table

Reason binding for [react-table](https://github.com/react-tools/react-table)

## Status

🚧 WIP

All the features should be supported but a lot of them uses Javascript objects
for the moment. The css need also to be import inside the HTML.

To see current progress and questions, look at the issues.

Don't hesitate to create issue to report a problem and create PR to add MOAR
types !

## Installation

```bash
npm install --save bs-react-table
```

Then add it to your `bs-dependencies` in your `bsconfig.json`:

```json
{
  ...
  "bs-dev-dependencies": ["bs-react-table"]
}
```

And then add this to your header in your html template :

```html
<link rel="stylesheet" href="https://unpkg.com/react-table@latest/react-table.css">
```

## Usage

Usage is very similar to the original package

```reason
let columns = [|
  {"Header": "Name", "accessor": "name"},
  {"Header": "Age", "accessor": "age"},
|];

let data = [|
  {"name": "thomas", "age": "25"},
  {"name": "aude", "age": "23"},
  {"name": "damien", "age": "32"},
|];

let make = _children => {
  ...component,
  render: self => <ReactTable.ReactTable columns data label=(Some("test")) />,
};
```

## Thanks

* [@insidersByte](https://github.com/InsidersByte) and his reason binding of
  material-ui, [bs-material-ui](https://github.com/InsidersByte/bs-material-ui).
  This library helps me a lot to understand how to do bindings and a lot of other
  stuff !
