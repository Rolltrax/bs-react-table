# bs-react-table

Bucklescript/Reason bindings for [react-table](https://github.com/react-tools/react-table)

## Info

🚧 This is a WIP library. Most of the basic features are implemented, but some are still left not working. If you would like to help with the development effort, feel free to submit a pull request 🚧

This library provides Bucklescript bindings for [react-table](https://github.com/react-tools/react-table)


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
