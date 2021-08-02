import ChartBar from "./ChartBar";
import "./chart.css";
function Chart(props) {
  const dataPointValues = props.dataPoints.map((dataPoint) => dataPoint.value);
  const MaxMonth = Math.max(...dataPointValues);
  return (
    <div className="chart">
      {props.dataPoints.map((dataPoint) => (
        <ChartBar
          key={dataPoint.label}
          value={dataPoint.value}
          maxValue={MaxMonth}
          label={dataPoint.label}
        />
      ))}
    </div>
  );
}

export default Chart;
